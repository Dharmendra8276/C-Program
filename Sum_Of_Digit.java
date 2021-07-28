import java.util.*;

public class Sum_Of_Digit 
{
    public static void main(String ar[])
    {
        // Get The input from the user
        Scanner input = new Scanner(System.in);
        //Let's call the method of scanner
        int noOfInputs = input.nextInt();
        //System.out.println(noOfInputs);

        for(int counter=0;counter<noOfInputs;counter++)
        {
            String data = input.next();
            int sum=0;
            for(int charcounter=0;charcounter<data.length();charcounter++)
            {
                sum += (data.charAt(charcounter)- '0');
            }
            
            System.out.println(sum);
        }
        input.close();
    }
}
