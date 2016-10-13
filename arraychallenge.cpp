#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

string article[] = {
  "the", "my", "your", "our", "that", "this", "every", "one", "the only", "his", "her"
};
string adjective[] = {
  "happy", "rotating", "red", "fast", "elastic", "smiley", "unbelievable", "infinite", "surprising",
  "mysterious", "glowing", "green", "blue", "tired", "hard", "soft", "transparent", "long", "short",
  "excellent", "noisy", "silent", "rare", "normal", "typical", "living", "clean", "glamorous",
  "fancy", "handsome", "lazy", "scary", "helpless", "skinny", "melodic", "silly",
  "kind", "brave", "nice", "ancient", "modern", "young", "sweet", "wet", "cold",
  "dry", "heavy", "industrial", "complex", "accurate", "awesome", "shiny", "cool", "glittering",
  "fake", "unreal", "naked", "intelligent", "smart", "curious", "strange", "unique", "empty",
  "gray", "saturated", "blurry"
};
string noun[] = {
  "forest", "tree", "flower", "sky", "grass", "mountain", "car", "computer", "man", "woman", "dog",
  "elephant", "ant", "road", "butterfly", "phone", "computer program", "grandma", "school", "bed", "mouse",
  "keyboard", "bicycle", "spaghetti", "drink", "cat", "t-shirt", "carpet", "wall", "poster",
  "airport", "bridge", "road", "river", "beach", "sculpture", "piano", "guitar", "fruit",
  "banana", "apple", "strawberry", "rubber band", "saxophone", "window", "linux computer",
  "skate board", "piece of paper", "photograph", "painting", "hat", "space", "fork",
  "mission", "goal", "project", "tax", "wind mill", "light bulb", "microphone",
  "cpu", "hard drive", "screwdriver"
};
string prep[] = {
  "under", "in front of", "above", "behind", "near", "following", "inside", "besides",
  "unlike", "like", "beneath", "against", "into", "beyond", "considering", "without",
  "with", "towards"
};
string verb[] = {
  "sings", "dances", "was dancing", "runs", "will run", "walks",
  "flies", "moves", "moved", "will move", "glows", "glowed", "spins", "promised",
  "hugs", "cheated", "waits", "is waiting", "is studying", "swims",
  "travels", "traveled", "plays", "played", "enjoys", "will enjoy",
  "illuminates", "arises", "eats", "drinks", "calculates", "kissed", "faded", "listens",
  "navigated", "responds", "smiles", "will smile", "will succeed",
  "is wondering", "is thinking", "is", "was", "will be", "might be", "was never"
};

void sentence();

int main() {
    srand(time(0));
    sentence();
    cout << endl;
}

void word(string stringarray[], int sizearray)
{
    cout << stringarray[rand() % sizearray] << " ";
}
void sentence() {
    word(article, 11);
    word(adjective, 66);
    word(noun, 63);

    word(verb, 46);
    word(prep, 18);

    word(article, 11);
    word(adjective, 66);
    word(noun, 63);
}
