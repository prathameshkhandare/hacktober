#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(const vector<int>& books, int n, int m, int maxPages) {
    int students = 1;
    int currentPages = 0;

    for (int i = 0; i < n; i++) {
        if (books[i] > maxPages) return false;

        if (currentPages + books[i] > maxPages) {
            students++;
            currentPages = books[i];

            if (students > m) return false;
        } else {
            currentPages += books[i];
        }
    }
    return true;
}

int findPages(const vector<int>& books, int n, int m) {
    if (m > n) return -1;

    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    int result = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(books, n, m, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    vector<int> books = {12, 34, 67, 90};
    int n = books.size();
    int m = 2; // Number of students

    cout << "Minimum possible value of the maximum number of pages: "
         << findPages(books, n, m) << endl;

    return 0;
}
