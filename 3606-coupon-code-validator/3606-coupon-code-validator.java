import java.util.*;

class Solution {
    public List<String> validateCoupons(String[] code,
                                        String[] businessLine,
                                        boolean[] isActive) {

        // Define business line priority
        Map<String, Integer> priority = new HashMap<>();
        priority.put("electronics", 0);
        priority.put("grocery", 1);
        priority.put("pharmacy", 2);
        priority.put("restaurant", 3);

        // Store valid coupons as (priority, code)
        List<Pair> validCoupons = new ArrayList<>();

        for (int i = 0; i < code.length; i++) {

            // Must be active
            if (!isActive[i]) continue;

            // Must have valid business line
            if (!priority.containsKey(businessLine[i])) continue;

            // Code must be non-empty
            if (code[i].isEmpty()) continue;

            // Code must contain only alphanumeric or underscore
            boolean validCode = true;
            for (char c : code[i].toCharArray()) {
                if (!Character.isLetterOrDigit(c) && c != '_') {
                    validCode = false;
                    break;
                }
            }
            if (!validCode) continue;

            validCoupons.add(new Pair(priority.get(businessLine[i]), code[i]));
        }

        // Sort by business priority, then lexicographically by code
        Collections.sort(validCoupons, (a, b) -> {
            if (a.priority == b.priority)
                return a.code.compareTo(b.code);
            return a.priority - b.priority;
        });

        // Extract only codes
        List<String> result = new ArrayList<>();
        for (Pair p : validCoupons) {
            result.add(p.code);
        }

        return result;
    }

    // Helper class
    class Pair {
        int priority;
        String code;

        Pair(int priority, String code) {
            this.priority = priority;
            this.code = code;
        }
    }
}
