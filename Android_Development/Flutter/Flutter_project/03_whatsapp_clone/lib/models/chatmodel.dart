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
    "https://cdn.pixabay.com/photo/2015/10/05/22/37/blank-profile-picture-973460_1280.png",
  ),
  ChatModel(
    "Pranav",
    "So today at 9 PM",
    "5:00 PM",
    "https://image.shutterstock.com/image-vector/man-character-face-avatar-glasses-260nw-562077406.jpg",
  ),
  ChatModel(
    "Dron",
    "Hello",
    "7:00 PM",
    "https://image.shutterstock.com/image-vector/man-character-face-avatar-glasses-260nw-562077406.jpg",
  ),
  ChatModel(
    "Ajinkya",
    "Thanks Bro",
    "8:30 AM",
    "https://cdn.pixabay.com/photo/2015/10/05/22/37/blank-profile-picture-973460_1280.png",
  ),
  ChatModel(
    "Sakshi",
    "Contact Sir",
    "11:30 AM",
    "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT-_dXsSkJVi3c55l7skxHe3xBRhOO195jnlw&usqp=CAU",
  ),
  ChatModel(
    "Ankit",
    "Call Dron also",
    "12:00 AM",
    "https://cdn.pixabay.com/photo/2015/10/05/22/37/blank-profile-picture-973460_1280.png",
  ),
  ChatModel(
    "Aachal",
    "Sorry Mam",
    "6:30",
    "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT-_dXsSkJVi3c55l7skxHe3xBRhOO195jnlw&usqp=CAU",
  ),
];
