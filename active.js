document.addEventListener('DOMContentLoaded', function() {  
    var menuToggle = document.querySelector('.menuToggle');  
    var navigation = document.querySelector('.navigation');  
  
    menuToggle.addEventListener('click', function() {  
        navigation.classList.toggle('active');  
    });  
});