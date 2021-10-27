class CallModel {
  String name = "";
  String day = "";
  String time = "";
  String profile = "";
  bool call = false;

  CallModel(name, day, time, call, profile) {
    this.name = name;
    this.day = day;
    this.time = time;
    this.call = call;
    this.profile = profile;
  }
}

//Make sure the profile of names in chatmodel and callmodel are same.
List<CallModel> calldata = [
  CallModel(
    "Aachal",
    "Today",
    "11:00 AM",
    true,
    "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT-_dXsSkJVi3c55l7skxHe3xBRhOO195jnlw&usqp=CAU",
  ),
  CallModel(
    "Ankit",
    "Today",
    "6:00 PM",
    false,
    "https://cdn.pixabay.com/photo/2015/10/05/22/37/blank-profile-picture-973460_1280.png",
  ),
  CallModel(
    "Sakshi",
    "Yesterday",
    "8:00 PM",
    false,
    "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT-_dXsSkJVi3c55l7skxHe3xBRhOO195jnlw&usqp=CAU",
  ),
  CallModel(
    "Ajinkya",
    "Yesterday",
    "10:00 AM",
    true,
    "https://cdn.pixabay.com/photo/2015/10/05/22/37/blank-profile-picture-973460_1280.png",
  ),
  CallModel(
    "Pranav",
    "Yesterday",
    "8:00 AM",
    false,
    "https://image.shutterstock.com/image-vector/man-character-face-avatar-glasses-260nw-562077406.jpg",
  ),
  CallModel(
    "Dron",
    "October 26",
    "2:00 PM",
    true,
    "https://image.shutterstock.com/image-vector/man-character-face-avatar-glasses-260nw-562077406.jpg",
  ),
];
