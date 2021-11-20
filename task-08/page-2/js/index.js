function button_1(){
      localStorage.setItem("Storing Random Stuff Here, hehe");
    }

function button_2() {
  // referenced from "https://www.w3resource.com/javascript-exercises/javascript-basic-exercise-1.php"
    
  var today_date = new Date();
  var hour = today_date.getHours();
  var minute = today_date.getMinutes();
  var second = today_date.getSeconds();
  var current_time = "Time : " +hour + " : " + minute + " : " + second;

  alert(current_time);      
  }

function button_3() {
      
  var background_list = ["url('https://cdn.pixabay.com/photo/2019/10/23/06/30/hamburg-4570577_1280.jpg')","url('https://cdn.pixabay.com/photo/2013/04/11/19/46/building-102840_1280.jpg')","url('https://cdn.pixabay.com/photo/2016/11/29/09/16/architecture-1868667_1280.jpg')","url('https://cdn.pixabay.com/photo/2017/04/24/13/37/architecture-2256489_1280.jpg)","url('https://cdn.pixabay.com/photo/2016/11/13/12/52/kuala-lumpur-1820944_1280.jpg')"];
  var item = background_list[Math.floor(Math.random()*background_list.length)];
  document.body.style.background = item+"no-repeat";
  document.body.style.backgroundSize ="cover";
      }
function button_6(){
  for (var i = 1; i <= 100; i++) {
    console.log("I did it");
    }
  }