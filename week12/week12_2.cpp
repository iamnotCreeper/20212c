function setup() {
    initializeFields();
    createCanvas(400, 300);
    textSize(40);
}

var choice;

function draw() {
    background(color(0xAA, 0x32, 0xA8));
    fill(color(0xFA, 0xFF, 0x05));
    if (choice == 0)
        rect(50, 50, 150, 2);
    if (choice == 1)
        rect(50, 100, 150, 2);
    if (choice == 2)
        rect(50, 150, 150, 2);
    text("Choice 1", 50, 50);
    text("Choice 2", 50, 100);
    text("Choice 3", 50, 150);
}

function mousePressed() {
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
