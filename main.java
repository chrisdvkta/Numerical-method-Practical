public class main{
    public static void main(String[] args)
    {
        int a = 5; 
        int remainder = a%2; 

        if (remainder==0){
            System.out.println("even");
        }
        else if (remainder ==1){
            System.out.println("odd");
        }
        else{
            System.out.println("zero");
        }


        switch (remainder){
            case 1: 
                System.out.println("odd");
        
            case 2: 
                System.out.println("even");
            default:
                System.out.print("zero");
            }
            

            



    }
}