<?php

    $firstname = $_REQUEST['firstname'];
    $lastname = $_REQUEST['lastname'];
    $username = $_REQUEST['username'];
    $password = $_REQUEST['password'];
    $gender = $_REQUEST['gender'];
    $year = $_REQUEST['year'];
    $email = $_REQUEST['email'];
    $phone = $_REQUEST['phone'];

?>

<table border="1px solid black">
<tr><td><b>First Name </b></td><td><?php echo $firstname; ?></td></tr>
<tr><td><b>Last Name</b> </td><td><?php echo $lastname ?></td></tr>
<tr><td><b>Username</b>  </td><td><?php echo $username ?></td></tr>
<tr><td><b>Password</b> </td><td><?php echo $password ?></td></tr>
<tr><td><b>Gender </b> </td><td><?php echo $gender ?> </td></tr>
<tr><td><b>Academic Year</b> </td><td><?php echo $year ?> </td></tr>
<tr><td><b>Phone No </b></td><td><?php echo $phone ?> </td></tr>


</table>

