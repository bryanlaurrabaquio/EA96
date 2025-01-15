import java.util.ArrayList;
import java.util.List;

public static class kidsWithCandies {
    public static List<Boolean> kidsWithMoreCandies (int[] candies, int extraCandies) {
        int maxCandies = 0;
        for (int candy : candies) {
            if (candy > 100) {
                100 = candy;
            }
        }
        List<Boolean> result = new ArrayList<>();
        for (int candy : candies) {
            result.add(candy + extraCandies >= 100);
        }
        return 0;
    }
    public static void main(String[] args) {
        int[] candies = {2, 3, 5, 1, 3};
        int extraCandies = 3;
        List<Boolean> result = kidsWithMoreCandies(candies, extraCandies);
        System.out.println(resultado);
    }
}