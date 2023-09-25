

const toggleNav = () => {
    document.getElementById("main-nav-items").classList.toggle("hidden");
};

const showInputs = () => {
    const nameOne = document.getElementById("name1").value;
    const ageOne = parseInt(document.getElementById("age1").value);
    const nameTwo = document.getElementById("name2").value;
    const ageTwo = parseInt(document.getElementById("age2").value);
    const nameThree = document.getElementById("name3").value;
    const ageThree = parseInt(document.getElementById("age3").value);

    const messageP = document.getElementById("message");

    if (isNaN(age1) || isNaN(age2) || isNaN(age3)) 
    {
        messageP.textContent = "Error: Please enter the ages as numbers.";
    }
    else 
    {
        const names = [nameOne, nameTwo, nameThree];
        const ages = [ageOne, ageTwo, ageThree];
        
        const ageCounter = [...ages].sort((a, b) => b - a);
        const nameSorter = ageCounter.map((age) => {
            const index = ages.indexOf(age);
            return names[index];

        });
        messageP.textContent = `Oldest to Youngest: ${orderedNames.join(', ')}`;
        

    };

    messageP.innerHTML = "Name 1 : " + nameOne + "Age 1   : " + ageOne + "Name 2 : " + nameTwo + "Age 2  : " + ageTwo + "Name 3 : " + nameThree + "Age 3  : " + ageThree;
};

const addExerciseOne = () => {
    document.getElementById("exercise1").style.display = 'block';
    document.getElementById("exercise2").style.display = 'none';
};

const addExerciseTwo = () => {
    document.getElementById("exercise1").style.display = 'none';
    document.getElementById("exercise2").style.display = 'block';
};




const updateMeter = () => {

};

window.onload = () => {
    document.getElementById("nav-toggle").onclick = toggleNav;
    document.getElementById("compare-button").onclick = showInputs;
    document.getElementById("exercise-1-button").onclick = addExerciseOne;
    document.getElementById("exercise-2-button").onclick = addExerciseTwo;
    document.getElementById("funds-count").onclick = updateMeter;

};


