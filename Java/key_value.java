import java.util.*;

public class game_logs {
    public static void main(String args[]) {
        Scanner kb = new Scanner(System.in);
        System.out.println("Give the word you want:");
        String[] word = kb.nextLine().split(","); //Bangladesh,india,America,England,Australia
        for(int i = 0; i < word.length; i++){
            solution(word[i]);
            System.out.println();
        }

    }

    public static void solution (String word){
        HashMap<String, Integer> result = new HashMap<>();
        for(int i = 0; i < word.length(); i++){
            int count = result.getOrDefault(String.valueOf(word.charAt(i)), 0);
            result.put(String.valueOf(word.charAt(i)), count+1);
        }

        for(String i: result.keySet()){
            System.out.println("Key: " + i + " || Value: " + result.get(i));
        }
    }
}

