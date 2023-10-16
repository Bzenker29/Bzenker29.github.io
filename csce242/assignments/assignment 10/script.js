class Lego {
    constructor (title, price, age, rating, picture) {
        this.title = title;
        this.price = price;
        this.age = age;
        this.rating = rating;
        this.picture = picture;
    }

    get item(){
        const legoSection = document.createElement("section");
        legoSection.classList.add("legos");


        const heading = document.createElement("h4");
        heading.innerText = this.title;
        legoSection.appendChild(heading);

        const infoList = document.createElement("ul");
        legoSection.appendChild(infoList);
        infoList.append(this.listItem(this.price));
        infoList.append(this.listItem(this.age));
        infoList.append(this.listItem(this.rating));
        infoList.append(this.listItem(this.age));

        legoSection.appendChild(this.legoPicture(this.picture));

        return legoSection;
    }

    listItem(info) {
        const liItem = document.createElement("li");
        liItem.innerText = info;
        return liItem;
    }

    legoPicture(picture) {
        const picItem = document.createElement("img");
        picItem.src = "images/" + picture;
        return picItem;
    }
}

window.onload = () => {
    let legos = [];
    let mainContent = document.getElementById("main-content");
    

    legos.push(new Lego("Millennium Falcon", "$849.99", "16+", "5 Stars", "falcon.jpeg")); 
    legos.push(new Lego("R2-D2", "$239.99", "18+", "5 Stars", "r2.jpeg")); 
    legos.push(new Lego("AT-AT", "$169.99", "10+", "5 Stars", "at.jpeg")); 
    legos.push(new Lego("Captain Rex Hemlet", "$69.99", "18+", "5 Stars", "rex.jpeg")); 
    legos.push(new Lego("Republic Fighter Tank", "$39.99", "7+", "4 Stars", "tank.jpeg")); 
    legos.push(new Lego("Tie Fighter", "$49.99", "8+", "4 Stars", "tie-fighter.jpeg")); 



    for (let i in legos) {
        mainContent.append(legos[i].item);
    }



}