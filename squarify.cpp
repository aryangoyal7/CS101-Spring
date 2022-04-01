include<simplecpp>

main_program{
turtleSim();
repeat(2){
    forward(80);
    repeat(2){
        forward(80);
        left(90);
        forward(40);
        left(90);
    }
    right(90);
    forward(80);
    repeat(2){
        forward(40);
        left(90);
        forward(80);
        left(90);
    }
    right(90);


}
wait(10);

}