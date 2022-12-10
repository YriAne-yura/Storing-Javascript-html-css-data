var a;
function test() {
    alert("Thông báo rằng cậu thật tuyệt vời");
}

function test2() {

    document.getElementById("hienthirandom").innerHTML = textContent.slice(15);
    
}

function bt2() {
    a = Math.floor(Math.random() * a);
    console.log("hiển thị a: " + a);
    document.getElementById("rd").innerHTML = a;
    document.getElementById("rd").style.width = "50px";
}