import java.util.*;

public class game_logs {
    public static void main(String a[]) {
        Scanner kb = new Scanner(System.in);
        String info;
        info = kb.nextLine();
        String[] values = info.split(" ");
        int noItem = Integer.parseInt(values[0]);
        int doneItemQty = noItem + 1;
        String[] items;
        String[] doneItems;
        items = Arrays.copyOfRange(values, 1, noItem + 1);
        List<String> listItems = new ArrayList<>(Arrays.asList(items));
        doneItems = Arrays.copyOfRange(values, doneItemQty, values.length - 1);

        for (String s : doneItems) {
            listItems.remove(s);
        }

        for (String listItem : listItems) {
            System.out.println(listItem);
        }

    }
}