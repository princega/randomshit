class Person{
    private String name;
    public String getName(){
        return name;
    }
    public void setName(String input){
        if(!input.isEmpty()){
            name = input;
        }
    }
}
public class Main{
    public static void main(String[] args){
        Person p = new Person();
        p.setName("Prince");
        System.out.println(p.getName());
    }
}