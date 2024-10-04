public class App {
    public static void main(String[] args) {

        /*Hello j=new Hello();
        j.displayHello();

        Hai m=new Hai();
        App a=new App();*/
       // B j=new B();
        //j.displaya();
        //j.displayb();

        //B k=new B();   // the constructor A is worked first because it b is inherisesd form a 
        //C sub=new C();
        //sub.display();  // here only works c but its inheristed from class D 
        Anakulam a=new Anakulam();
        Darvin d=new Darvin();
        d.displayd(a);



        
    }
    // we can make objects for itsown class form inside a class
    
    App() {
        System.out.println("test for app");
        

    }

}
