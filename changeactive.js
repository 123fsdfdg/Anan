document.addEventListener('DOMContentLoaded', function() {  
    var menuItems = document.querySelectorAll('.navigation ul li');  

    menuItems.forEach(function(item) {  
        item.addEventListener('click', function() {  
            // 移除其他所有项的 active 类  
            menuItems.forEach(function(otherItem) {  
                otherItem.classList.remove('active');  
            });  

            // 为当前项添加 active 类  
            this.classList.add('active');  
        });  
    });  
});