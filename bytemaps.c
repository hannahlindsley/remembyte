#include "bytemaps.h"

/*
 * The list of emoji was originally taken from 
 * <http://www.windytan.com/2014/10/visualizing-hex-bytes-with-unicode-emoji.html>
 */
const char *emoji_map[EMOJI_MAP_LEN] = {
    "🌀", "🌂", "🌅", "🌈", "🌙", "🌞", "🌟", "🌠",
    "🌰", "🌱", "🌲", "🌳", "🌴", "🌵", "🌷", "🌸",
    "🌹", "🌺", "🌻", "🌼", "🌽", "🌾", "🌿", "🍀",
    "🍁", "🍂", "🍃", "🍄", "🍅", "🍆", "🍇", "🍈",
    "🍉", "🍊", "🍋", "🍌", "🍍", "🍎", "🍏", "🍐",
    "🍑", "🍒", "🍓", "🍔", "🍕", "🍖", "🍗", "🍘",
    "🍜", "🍝", "🍞", "🍟", "🍠", "🍡", "🍢", "🍣",
    "🍤", "🍥", "🍦", "🍧", "🍨", "🍩", "🍪", "🍫",
    "🍬", "🍭", "🍮", "🍯", "🍰", "🍱", "🍲", "🍳",
    "🍴", "🍵", "🍶", "🍷", "🍸", "🍹", "🍺", "🍻",
    "🍼", "🎀", "🎁", "🎂", "🎃", "🎄", "🎅", "🎈",
    "🎉", "🎊", "🎋", "🎌", "🎍", "🎎", "🎏", "🎒",
    "🎓", "🎠", "🎡", "🎢", "🎣", "🎤", "🎥", "🎦",
    "🎧", "🎨", "🎩", "🎪", "🎫", "🎬", "🎭", "🎮",
    "🎯", "🎰", "🎱", "🎲", "🎳", "🎴", "🎵", "🎷",
    "🎸", "🎹", "🎺", "🎻", "🎽", "🎾", "🎿", "🏀",
    "🏁", "🏂", "🏃", "🏄", "🏆", "🏇", "🏈", "🏉",
    "🏊", "🐀", "🐁", "🐂", "🐃", "🐄", "🐅", "🐆",
    "🐇", "🐈", "🐉", "🐊", "🐋", "🐌", "🐍", "🐎",
    "🐏", "🐐", "🐑", "🐒", "🐓", "🐔", "🐕", "🐖",
    "🐗", "🐘", "🐙", "🐚", "🐛", "🐜", "🐝", "🐞",
    "🐟", "🐠", "🐡", "🐢", "🐣", "🐤", "🐥", "🐦",
    "🐧", "🐨", "🐩", "🐪", "🐫", "🐬", "🐭", "🐮",
    "🐯", "🐰", "🐱", "🐲", "🐳", "🐴", "🐵", "🐶",
    "🐷", "🐸", "🐹", "🐺", "🐻", "🐼", "🐽", "🐾",
    "👀", "👂", "👃", "👄", "👅", "👆", "👇", "👈",
    "👉", "👊", "👋", "👌", "👍", "👎", "👏", "👐",
    "👑", "👒", "👓", "👔", "👕", "👖", "👗", "👘",
    "👙", "👚", "👛", "👜", "👝", "👞", "👟", "👠",
    "👡", "👢", "👣", "👤", "👥", "👦", "👧", "👨",
    "👩", "👪", "👮", "👯", "👺", "👻", "👼", "👽",
    "👾", "👿", "💀", "💁", "💂", "💃", "💄", "💅"
};

const char *pgp_wordlist_two[PGP_WORDLIST_TWO_LEN] = {
  "aardvark", "absurd", "accrue", "acme",
  "adrift", "adult", "afflict", "ahead",
  "aimless", "Algol", "allow", "alone",
  "ammo", "ancient", "apple", "artist",
  "assume", "Athens", "atlas", "Aztec",
  "baboon", "backfield", "backward", "basalt",
  "beaming", "bedlamp", "beehive", "beeswax",
  "befriend", "Belfast", "berserk", "billiard",
  "bison", "blackjack", "blockade", "blowtorch",
  "bluebird", "bombast", "bookshelf", "brackish",
  "breadline", "breakup", "brickyard", "briefcase",
  "Burbank", "button", "buzzard", "cement",
  "chairlift", "chatter", "checkup", "chisel",
  "choking", "chopper", "Christmas", "clamshell",
  "classic", "classroom", "cleanup", "clockwork",
  "cobra", "commence", "concert", "cowbell",
  "crackdown", "cranky", "crowfoot", "crucial",
  "crumpled", "crusade", "cubic", "deadbolt",
  "deckhand", "dogsled", "dosage", "dragnet",
  "drainage", "dreadful", "drifter", "dropper",
  "drumbeat", "drunken", "Dupont", "dwelling",
  "eating", "edict", "egghead", "eightball",
  "endorse", "endow", "enlist", "erase",
  "escape", "exceed", "eyeglass", "eyetooth",
  "facial", "fallout", "flagpole", "flatfoot",
  "flytrap", "fracture", "fragile", "framework",
  "freedom", "frighten", "gazelle", "Geiger",
  "Glasgow", "glitter", "glucose", "goggles",
  "goldfish", "gremlin", "guidance", "hamlet",
  "highchair", "hockey", "hotdog", "indoors",
  "indulge", "inverse", "involve", "island",
  "Janus", "jawbone", "keyboard", "kickoff",
  "kiwi", "klaxon", "lockup", "merit",
  "minnow", "miser", "Mohawk", "mural",
  "music", "Neptune", "newborn", "nightbird",
  "obtuse", "offload", "oilfield", "optic",
  "orca", "payday", "peachy", "pheasant",
  "physique", "playhouse", "Pluto", "preclude",
  "prefer", "preshrunk", "printer", "profile",
  "prowler", "pupil", "puppy", "python",
  "quadrant", "quiver", "quota", "ragtime",
  "ratchet", "rebirth", "reform", "regain",
  "reindeer", "rematch", "repay", "retouch",
  "revenge", "reward", "rhythm", "ringbolt",
  "robust", "rocker", "ruffled", "sawdust",
  "scallion", "scenic", "scorecard", "Scotland",
  "seabird", "select", "sentence", "shadow",
  "showgirl", "skullcap", "skydive", "slingshot",
  "slothful", "slowdown", "snapline", "snapshot",
  "snowcap", "snowslide", "solo", "spaniel",
  "spearhead", "spellbind", "spheroid", "spigot",
  "spindle", "spoilage", "spyglass", "stagehand",
  "stagnate", "stairway", "standard", "stapler",
  "steamship", "stepchild", "sterling", "stockman",
  "stopwatch", "stormy", "sugar", "surmount",
  "suspense", "swelter", "tactics", "talon",
  "tapeworm", "tempest", "tiger", "tissue",
  "tonic", "tracker", "transit", "trauma",
  "treadmill", "Trojan", "trouble", "tumor",
  "tunnel", "tycoon", "umpire", "uncut",
  "unearth", "unwind", "uproot", "upset",
  "upshot", "vapor", "village", "virus",
  "Vulcan", "waffle", "wallet", "watchword",
  "wayside", "willow", "woodlark", "Zulu"
};

const char *pgp_wordlist_three[PGP_WORDLIST_THREE_LEN] = {
  "adroitness", "adviser", "aggregate", "alkali",
  "almighty", "amulet", "amusement", "antenna",
  "applicant", "Apollo", "armistice", "article",
  "asteroid", "Atlantic", "atmosphere", "autopsy",
  "Babylon", "backwater", "barbecue", "belowground",
  "bifocals", "bodyguard", "borderline", "bottomless",
  "Bradbury", "Brazilian", "breakaway", "Burlington",
  "businessman", "butterfat", "Camelot", "candidate",
  "cannonball", "Capricorn", "caravan", "caretaker",
  "celebrate", "cellulose", "certify", "chambermaid",
  "Cherokee", "Chicago", "clergyman", "coherence",
  "combustion", "commando", "company", "component",
  "concurrent", "confidence", "conformist", "congregate",
  "consensus", "consulting", "corporate", "corrosion",
  "councilman", "crossover", "cumbersome", "customer",
  "Dakota", "decadence", "December", "decimal",
  "designing", "detector", "detergent", "determine",
  "dictator", "dinosaur", "direction", "disable",
  "disbelief", "disruptive", "distortion", "divisive",
  "document", "embezzle", "enchanting", "enrollment",
  "enterprise", "equation", "equipment", "escapade",
  "Eskimo", "everyday", "examine", "existence",
  "exodus", "fascinate", "filament", "finicky",
  "forever", "fortitude", "frequency", "gadgetry",
  "Galveston", "getaway", "glossary", "gossamer",
  "graduate", "gravity", "guitarist", "hamburger",
  "Hamilton", "handiwork", "hazardous", "headwaters",
  "hemisphere", "hesitate", "hideaway", "holiness",
  "hurricane", "hydraulic", "impartial", "impetus",
  "inception", "indigo", "inertia", "infancy",
  "inferno", "informant", "insincere", "insurgent",
  "integrate", "intention", "inventive", "Istanbul",
  "Jamaica", "Jupiter", "leprosy", "letterhead",
  "liberty", "maritime", "matchmaker", "maverick",
  "Medusa", "megaton", "microscope", "microwave",
  "midsummer", "millionaire", "miracle", "misnomer",
  "molasses", "molecule", "Montana", "monument",
  "mosquito", "narrative", "nebula", "newsletter",
  "Norwegian", "October", "Ohio", "onlooker",
  "opulent", "Orlando", "outfielder", "Pacific",
  "pandemic", "pandora", "paperweight", "paragon",
  "paragraph", "paramount", "passenger", "pedigree",
  "Pegasus", "penetrate", "perceptive", "performance",
  "pharmacy", "phonetic", "photograph", "pioneer",
  "pocketful", "politeness", "positive", "potato",
  "processor", "prophecy", "provincial", "proximate",
  "puberty", "publisher", "pyramid", "quantity",
  "racketeer", "rebellion", "recipe", "recover",
  "repellent", "replica", "reproduce", "resistor",
  "responsive", "retraction", "retrieval", "retrospect",
  "revenue", "revival", "revolver", "Sahara",
  "sandalwood", "sardonic", "Saturday", "savagery",
  "scavenger", "sensation", "sociable", "souvenir",
  "specialist", "speculate", "stethoscope", "stupendous",
  "supportive", "surrender", "suspicious", "sympathy",
  "tambourine", "telephone", "therapist", "tobacco",
  "tolerance", "tomorrow", "torpedo", "tradition",
  "travesty", "trombonist", "truncated", "typewriter",
  "ultimate", "undaunted", "underfoot", "unicorn",
  "unify", "universe", "unravel", "upcoming",
  "vacancy", "vagabond", "versatile", "vertigo",
  "Virginia", "visitor", "vocalist", "voyager",
  "warranty", "Waterloo", "whimsical", "Wichita",
  "Wilmington", "Wyoming", "yesteryear", "Yucatan"
};

// Yeah I know this is dumb
const char *hex_map[256] = {
  "00", "01", "02", "03", "04", "05", "06", "07", 
  "08", "09", "0a", "0b", "0c", "0d", "0e", "0f", 
  "10", "11", "12", "13", "14", "15", "16", "17", 
  "18", "19", "1a", "1b", "1c", "1d", "1e", "1f", 
  "20", "21", "22", "23", "24", "25", "26", "27", 
  "28", "29", "2a", "2b", "2c", "2d", "2e", "2f", 
  "30", "31", "32", "33", "34", "35", "36", "37", 
  "38", "39", "3a", "3b", "3c", "3d", "3e", "3f", 
  "40", "41", "42", "43", "44", "45", "46", "47", 
  "48", "49", "4a", "4b", "4c", "4d", "4e", "4f", 
  "50", "51", "52", "53", "54", "55", "56", "57", 
  "58", "59", "5a", "5b", "5c", "5d", "5e", "5f", 
  "60", "61", "62", "63", "64", "65", "66", "67", 
  "68", "69", "6a", "6b", "6c", "6d", "6e", "6f", 
  "70", "71", "72", "73", "74", "75", "76", "77", 
  "78", "79", "7a", "7b", "7c", "7d", "7e", "7f", 
  "80", "81", "82", "83", "84", "85", "86", "87", 
  "88", "89", "8a", "8b", "8c", "8d", "8e", "8f", 
  "90", "91", "92", "93", "94", "95", "96", "97", 
  "98", "99", "9a", "9b", "9c", "9d", "9e", "9f", 
  "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", 
  "a8", "a9", "aa", "ab", "ac", "ad", "ae", "af", 
  "b0", "b1", "b2", "b3", "b4", "b5", "b6", "b7", 
  "b8", "b9", "ba", "bb", "bc", "bd", "be", "bf", 
  "c0", "c1", "c2", "c3", "c4", "c5", "c6", "c7", 
  "c8", "c9", "ca", "cb", "cc", "cd", "ce", "cf", 
  "d0", "d1", "d2", "d3", "d4", "d5", "d6", "d7", 
  "d8", "d9", "da", "db", "dc", "dd", "de", "df", 
  "e0", "e1", "e2", "e3", "e4", "e5", "e6", "e7", 
  "e8", "e9", "ea", "eb", "ec", "ed", "ee", "ef", 
  "f0", "f1", "f2", "f3", "f4", "f5", "f6", "f7", 
  "f8", "f9", "fa", "fb", "fc", "fd", "fe", "ff"
};

mapping_t a2mapping_t(char *map_name) {
  mapping_t map;
  if (strlen(map_name) >=3 && strncmp(map_name, "hex", 3) == 0) {
    map = HEX;
  }
  else if (strlen(map_name) >=5 && strncmp(map_name, "emoji", 3) == 0) {
    map = EMOJI;
  }
  else if (strlen(map_name) >=3 && strncmp(map_name, "pgp", 3) == 0) {
    map = PGP;
  }
  else {
    fprintf(stderr, "No such bytemap: %s\n", map_name);
    exit(-1);
  }
  return map;
}

char *get_display_hash(unsigned char *hash, size_t hash_len, mapping_t mapping) {
  char *maps[10], *separator, *terminator;
  size_t maps_count;
  switch (mapping) {
    case HEX:
      return buf2map(hash, hash_len, ":", "", 1, &hex_map);
      break;
    case EMOJI:
      return buf2map(hash, hash_len, ": ", " ", 1, &emoji_map);
      break;
    case PGP:
      return buf2map(hash, hash_len, ", ", "", 2, &pgp_wordlist_two, &pgp_wordlist_three);
      break;
    default:
      fprintf(stderr, 
              "ERROR: mapping is set to %i but I can't tell what that means.\n",
              mapping);
      exit(-1);
  }
  // NOTE: Caller must free the returned pointer
}


/**
 * Map the bytes in a buffer to values from one or more bytemaps
 * 
 * @param buffer a buffer
 *
 * @param buflen the length of the buffer in bytes
 *
 * @param maps an array of pointers to bytemap arrays. bytemap arrays are arrays with 256 elements, where each element is either a single character (e.g. 'a') or a null-terminated string (e.g. "asdf").
 *
 * @param maps_count the number of maps passed
 *
 * @param separator null-terminated string to insert between each byte representation
 *
 * @param terminator null-terminated string to insert after the last byte representation 
 *
 * @return a null-terminated string representing the 'buffer' parameter. each byte in the original buffer is represented by one of the bytemaps passed as the 'maps' parameter; between each pair of byte representations is the separator string, and after the representation of the last byte is the terminator string. maps are used alternatingly, in the order provided - for example, if 2 maps are passed, the first byte will be represented by its value from maps[0], the second from maps[1], the third from maps[0] again, and so on. 
 *
 */

char *buf2map(unsigned char *buffer, size_t buflen, const char *separator, const char *terminator, size_t maps_count, ...) {
  char *byterep, *os=NULL, *maps[maps_count];
  int inctr=0, ossz=0, insertpt=0, septerm_longest=0, mctr, mapnum;
  unsigned int singlebyte;
  va_list ap;

  if (maps_count == 0) {
    fprintf(stderr, "Tried to map a buffer without passing any maps. Exiting...\n");
    exit(-1);
  }
  va_start(ap, maps_count);

  char *whatever;
  printf("maps_count: %i\n", maps_count);
  for (mctr=0; mctr<maps_count; mctr++) {
    printf("Map counter: %i\n", mctr);
    //maps[mctr] = va_arg(ap, char*);
    whatever = va_arg(ap, char**);
  }
  va_end(ap);

  int i;
  for (i=0; i<256; i++) {
    //printf("%s", maps[mctr][i]);
    printf("%s", maps[0][i]);
  }
  printf("\n");

  if (strlen(separator) > strlen(terminator)) {
    septerm_longest = strlen(separator);
  }
  else {
    septerm_longest = strlen(terminator) +1; // +1 for the terminating \0
  }

  for (inctr=0; inctr<buflen; inctr++) {
    singlebyte = (unsigned int)buffer[inctr];

    mapnum = inctr % maps_count;
    byterep = (char*) maps[mapnum][singlebyte];

    insertpt = ossz;
    ossz += strlen(byterep) + septerm_longest;

    os = realloc(os, ossz);
    if (! os) {
      fprintf(stderr, "Could not allocate memory. Exiting...\n");
      exit(-1);
    }

    memcpy(os +insertpt, byterep, strlen(byterep));
    insertpt += strlen(byterep);

    if (inctr != buflen-1) {
      memcpy(os +insertpt, separator, strlen(separator));
    }
    else {
      memcpy(os +insertpt, terminator, strlen(terminator)+1); // +1 for terminating \0
    }

  }
  return os;
  // NOTE: Caller must free the returned pointer
}

