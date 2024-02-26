const image1 = document.getElementById("img1");
const image3 = document.getElementById("img3");
const image4 = document.getElementById("img4");

img1.addEventListener("mouseover", () => {
  TextImage.innerHTML =
    " В темнице Деварка томился закованный в кандалы мстительный маг, замышлявший побег. Он делил камеру с невнятно бормочущим существом по имени Н'эйкс — вором, которого Чёрствый совет проклял вечной жизнью, чтобы наказание за воровство и мошенничество проучило его как следует.";
});
img1.addEventListener("mouseout", () =>{
    TextImage.innerHTML=' '
});
img2.addEventListener("click", () => {
    img2.style.border= '10px solid red'
});
img2.addEventListener("dblclick", () => {
    img2.style.border='none'
});
img4.addEventListener("mouseout", () =>{
    img4.src='photo/ck.jpg'
});
img4.addEventListener("mouseover", () =>{
    img4.src='photo/pa.jpg'
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
