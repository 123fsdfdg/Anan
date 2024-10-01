document.addEventListener('DOMContentLoaded', (event) => {  
    const cubeContainer = document.querySelector('.cube-container');  
    const rotateLeftButton = document.getElementById('rotateLeftButton');  
    const rotateRightButton = document.getElementById('rotateRightButton');  
    const rotateUpButton = document.getElementById('rotateUpButton');  
    const rotateDownButton = document.getElementById('rotateDownButton');  
    const resetButton = document.getElementById('resetButton');  
  
    let rotation = { x: -30, y: -45, z: 0 }; // 初始化旋转角度  
  
    function updateCubeRotation() {  
        // 更新立方体的CSS变换属性  
        cubeContainer.style.transform = `rotateX(${rotation.x}deg) rotateY(${rotation.y}deg) rotateZ(${rotation.z}deg)`;  
    }  
  
    function rotateLeft() {  
        rotation.y -= 90; // 绕Y轴逆时针旋转90度  
        if (rotation.y < -360) {  
            rotation.y += 360; // 确保角度在-360到360之间  
        }  
        updateCubeRotation();  
    }  
  
    function rotateRight() {  
        rotation.y += 90; // 绕Y轴顺时针旋转90度  
        if (rotation.y > 360) {  
            rotation.y -= 360; // 确保角度在-360到360之间  
        }  
        updateCubeRotation();  
    }  
  
    function rotateUp() {  
        rotation.x += 90; // 绕X轴顺时针旋转90度  
        if (rotation.x > 360) {  
            rotation.x -= 360; // 确保角度在-360到360之间  
        }  
        updateCubeRotation();  
    }  
  
    function rotateDown() {  
        rotation.x -= 90; // 绕X轴逆时针旋转90度  
        if (rotation.x < -360) {  
            rotation.x += 360; // 确保角度在-360到360之间  
        }  
        updateCubeRotation();  
    }  
  
    function resetRotation() {  
        rotation = { x: -30, y: -45, z: 0 }; // 重置到初始旋转状态  
        updateCubeRotation();  
    }  
  
    // 绑定按钮点击事件  
    rotateLeftButton.addEventListener('click', rotateLeft);  
    rotateRightButton.addEventListener('click', rotateRight);  
    rotateUpButton.addEventListener('click', rotateUp);  
    rotateDownButton.addEventListener('click', rotateDown);  
    resetButton.addEventListener('click', resetRotation);  
});