const image1 = document.getElementById("img1");
const image3 = document.getElementById("img3");
const image4 = document.getElementById("img4");

image1.addEventListener("mouseover", () => {
  TextImage.innerHTML =
    "Half-Life (с англ. — «период полураспада») — компьютерная игра в жанре научно-фантастического шутера от первого лица, разработанная американской компанией Valve Software и изданная компанией Sierra Studios 19 ноября 1998 года для персональных компьютеров[3]. Первая игра в серии Half-Life.";
});
image1.addEventListener("mouseout", () =>{
    TextImage.innerHTML=' '
});
img2.addEventListener("click", () => {
    img2.style.border= '10px solid red';
});
img2.addEventListener("dblclick", () => {
    img2.style.border='none'
});
img4.addEventListener("mouseout", () =>{
    img4.src='Counter-Strike_Box.jpg'
});
img4.addEventListener("mouseover", () =>{
    img4.src='dust2.jpg'
});
submit1.addEventListener('click', () => {
    event.preventDefault()
    let surname = document.getElementById('surname').value
     let name = document.getElementById('name1').value
     let nomer = document.getElementById('nomer').value
     let number = document.getElementById('number').value
     let adres =document.getElementById('adres').value
   footerBlock.innerHTML = `<div>
        <p><b>Фамилия:</b>: ${surname} </p>
        <p><b>Имя</b>: ${name}</p>
        <p><b>Номер товара</b>: ${nomer}</p>
        <p><b>Количество товара:</b> ${number}</p>
        <p><b>Адрес:</b>${adres}</p>
   </div>`
})
