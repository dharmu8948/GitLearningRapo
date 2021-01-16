package intothedwarfness;
import intothedwarfness.Classes.Window;
import intothedwarfness.Classes.Map;
public class IntroTheDwarfness
{
public static void main(String[] args)
{
Window screen = new Window("Into the Drarfness");
new Map();
screen.init();
screen.run();
}
}