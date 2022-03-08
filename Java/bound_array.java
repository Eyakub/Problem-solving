import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class game_logs {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int data[] = new int[scan.nextInt()];
        int sum = 0;
        int min = data[0];
        int max = data[0];

        for(int i = 0; i < data.length; i++){
            data[i] = scan.nextInt();
            if (i == 0){
                min = data[i];
                max = data[i];
            }
            sum = sum + data[i];
            if (data[i] < min){
                min = data[i];
            }
            if (data[i] > max){
                max = data[i];
            }
        }
        System.out.println("Sum: " + sum);
        System.out.println("Max: " + max);
        System.out.println("Min: " + min);

    }
}
