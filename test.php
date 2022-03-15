<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
</body>
</html>

<?php
define('SITE_URL',"http://localhost/");

function listFolderFiles($dir){
   $fileFolderList = scandir($dir);
   echo '<ul>';
   foreach($fileFolderList as $fileFolder){
       if($fileFolder != '.' && $fileFolder != '..'){
           if(!is_dir($dir.'/'.$fileFolder)){
               echo '<li><a target="_blank" href="'.SITE_URL.'/'.ltrim($dir.'/'.$fileFolder,'./').'">'.$fileFolder.'</a>';
           } else {
               echo '<li>'.$fileFolder;
           }
           if(is_dir($dir.'/'.$fileFolder)) listFolderFiles($dir.'/'.$fileFolder);
               echo '</li>';
           }
   }
   echo '</ul>';
}
listFolderFiles('fxphoto/'); // function call with directory path (e.g. : upload/) 
?>
