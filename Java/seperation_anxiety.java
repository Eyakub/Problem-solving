import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.util.StringJoiner;

public class game_logs {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        StringJoiner joiner = new StringJoiner(", ");

        ArrayList<String> tempArrayList = new ArrayList<>();
        while (in.hasNext()){
            tempArrayList.add(in.next());
            if(in.hasNextLine()) break;
        }

        String[] data = new String[tempArrayList.size()];
        for (int i = 0; i < tempArrayList.size(); i++){
            if(i == tempArrayList.size() - 1){
                data[i] = tempArrayList.get(i) + "#";
            }else{
                data[i] = tempArrayList.get(i);
            }
        }

        for (String datum : data) {
            joiner.add(datum);
        }
        System.out.println(joiner.toString());
    }

}

