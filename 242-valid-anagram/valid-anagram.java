class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()){
            return false;
        }

        HashMap<Character, Integer> freqCheck = new HashMap<>();

        for(char sElements: s.toCharArray()){
            freqCheck.put(sElements, freqCheck.getOrDefault(sElements,0) + 1);
        }

        for(char tElements: t.toCharArray()){
            if(!freqCheck.containsKey(tElements)){
                return false;
            }
            freqCheck.put(tElements, freqCheck.get(tElements) - 1);
        }

        for(int count : freqCheck.values()){
            if(count != 0){
                return false;
            }
        }

        return true;
        
    }
}