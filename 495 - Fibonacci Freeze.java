package java1;
import java.util.Scanner;
import java.math.BigInteger;
public class java{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while(input.hasNextInt()){
            int n = input.nextInt();
            if(n == 0){
                System.out.println("The Fibonacci number for 0 is 0");
            }
            else if(n == 1){
                System.out.println("The Fibonacci number for 1 is 1");
            }
            else{
                BigInteger first = new BigInteger("0");
                BigInteger second = new BigInteger("1");
                BigInteger sum = new BigInteger("0");
                for(int i = 2; i <= n; i++){
                    sum = first.add(second);
                    first = second;
                    second = sum;
                }
                System.out.println("The Fibonacci number for "+ n +" is " + sum);
            }
        }
    }
}