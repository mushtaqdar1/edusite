class Box{
    double width;
    double height;
    double depth;
    // this is the construtor for box.
    Box()
    {
        System.out.println("constructing box");
        width=10;
        height=5;
        depth=10;
    }
    //Compute and return volume, 
    double volume()
    {
        return width*height*depth;

    }
}
    public class Demo_Constructor {
   public static void main(String [] args){
    //declare , allocate and intiailize box objects
    Box mybox1=new Box();
    Box mybox2=new Box();
     double vol;
   // get volume of first box
   vol=mybox1.volume();
   System.out.println("Volume is"+vol);
   //get volume of second box
   vol=mybox2.volume();
   System.out.println("Volume is"+vol);
}
}

