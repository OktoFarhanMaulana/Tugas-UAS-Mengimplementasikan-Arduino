<?php

include("php_serial.class.php");


$serial = new phpSerial();
$serial->deviceSet("/dev/ttyUSB0"); 
$serial->confBaudRate(9600);        
$serial->deviceOpen();


$read = $serial->readPort(); 

// Menampilkan status LED
echo "<h2>Status LED:</h2>";
if (strpos($read, "LED ON") !== false) {
    echo "<p>LED Menyala</p>";
} else {
    echo "<p>LED Mati</p>";
}


$serial->deviceClose();
?>
