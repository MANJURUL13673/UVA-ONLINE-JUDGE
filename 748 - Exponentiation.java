package java1;
import java.util.Scanner;
import java.math.BigDecimal;
public class java{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        double num1;
        int num2;
        String far;
        int n;
        int temp;
        int i;
        while(input.hasNextDouble() || input.hasNextInt()){
            num1 = input.nextDouble();
            num2 = input.nextInt();
            temp = 0;
            BigDecimal value1 = BigDecimal.valueOf(num1);
            far = (value1.pow(num2)).toPlainString();
            n = far.length();
            for(i = 0; i<n; i++){
                if(far.charAt(i) == '.'){
                    break;
                }
                if(far.charAt(i) == '0' && temp == 0){
                    
                }
                else{
                    System.out.print(far.charAt(i));
                    temp = 1;
                }
            }
            int k = 0;
            System.out.print(".");
            for(int j = n-1; j > i; j--){
                if(far.charAt(j) == '0'){
                    k++;
                }
                else{
                    break;
                }
            }
            for(int j = i+1;j < (n-k); j++ ){
                System.out.print(far.charAt(j));
            }
            System.out.println();
        }
    }
}