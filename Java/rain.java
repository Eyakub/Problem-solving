import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class game_logs {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int rain_temp[] = new int[5];
        String days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
        int max = 0;
        int index_no = 0;

        for(int i = 0; i < rain_temp.length; i++){
            rain_temp[i] = in.nextInt();
            if(i == 0){
                max = rain_temp[i];
            }
            if (rain_temp[i] > max){
                max = rain_temp[i];
                index_no = i;
            }
        }

        System.out.println("maximum rain measurements: " + max);
        System.out.println("Recorded on the day of " + days[index_no]);
    }

}

