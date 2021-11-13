class ChatModel {
  String name = "";
  String message = "";
  String time = "";
  String profile = "";
  ChatModel(name, message, time, profile) {
    this.name = name;
    this.message = message;
    this.time = time;
    this.profile = profile;
  }
}

//If you want to change the profile images just replace the url.
List<ChatModel> chatdata = [
  ChatModel(
    "Asmit",
    "Hi there",
    "10:00 AM",
    "assets/profile.png",
  ),
  ChatModel(
    "Pranav",
    "So today at 9 PM",
    "5:00 PM",
    "assets/men.png",
  ),
  ChatModel(
    "Dron",
    "Hello",
    "7:00 PM",
    "assets/men.png",
  ),
  ChatModel(
    "Ajinkya",
    "Thanks Bro",
    "8:30 AM",
    "assets/profile.png",
  ),
  ChatModel(
    "Sakshi",
    "Contact Sir",
    "11:30 AM",
    "assets/girl.png",
  ),
  ChatModel(
    "Ankit",
    "Call Dron also",
    "12:00 AM",
    "assets/profile.png",
  ),
  ChatModel(
    "Aachal",
    "Sorry Mam",
    "6:30 PM",
    "assets/girl.png",
  ),
];
