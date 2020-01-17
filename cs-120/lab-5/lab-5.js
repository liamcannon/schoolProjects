window.onload = () => {
    let bookArray = [
        {
            title:'House on Mango Street', 
            author:'Sandra Cisneros', 
            alreadyRead: true, 
            bookCover:"https://images-na.ssl-images-amazon.com/images/I/91XbyRlDxzL.jpg"
        },
        {
            title:'Go the Fuck to sleep', 
            author:'Adam Mansbach', 
            alreadyRead: false, 
            bookCover:"https://kirtangpirateradio.com/wp-content/uploads/2016/11/Gothefucktosleep.jpg"
        },
        {
            title:'All My Friends are Dead', 
            author:'Avery Monsen', 
            alreadyRead: true, 
            bookCover:"https://images-na.ssl-images-amazon.com/images/I/41carZiACoL._SX374_BO1,204,203,200_.jpg"
        },
        {
            title:'Mein Kampf', 
            author:'Adolf Hitler', 
            alreadyRead: false, 
            bookCover:"https://cdn.britannica.com/16/187816-050-74B41B7B/Cover-edition-Adolf-Hitler-Mein-Kampf-1943.jpg"
        }
    ] 

    bookArray.forEach(searchArray);

    function searchArray(array){
     if(array.alreadyRead){
         //console.log(`You have already read ${array.title} by ${array.author}`);
         document.getElementById("bookList").innerHTML += `<i><li><a href = "${array.bookCover}" target = "_blank">${array.title} by ${array.author}</a></i></li><img src = "${array.bookCover}" height = 200, width = 200>`;
      }
      else{
          //console.log(`You still need to read ${array.title} by ${array.author}`);
          document.getElementById("bookList").innerHTML += `<b><li><a href = "${array.bookCover}" target = "_blank"> ${array.title} by ${array.author}</a></b></li><img src = "${array.bookCover}" height = 200, width = 200>`;
      }
    }
}