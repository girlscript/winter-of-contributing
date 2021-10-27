class StatusModel {
  String name = "";
  String day = "";
  String time = "";
  String profile = "";
  StatusModel(name, day, time, profile) {
    this.name = name;
    this.day = day;
    this.time = time;
    this.profile = profile;
  }
}

//If someone want to change the profile images just change the url for now I have put same url as profile photoes.
List<StatusModel> statusdata = [
  StatusModel(
    "Dron",
    "Today",
    "11:00 AM",
    "https://cdn.pixabay.com/photo/2015/10/05/22/37/blank-profile-picture-973460_1280.png",
  ),
  StatusModel(
    "Sakshi",
    "Yesterday",
    "9:00 AM",
    "https://image.shutterstock.com/image-vector/man-character-face-avatar-glasses-260nw-562077406.jpg",
  ),
  StatusModel(
    "Asmit",
    "Yesterday",
    "7:00 PM",
    "https://image.shutterstock.com/image-vector/man-character-face-avatar-glasses-260nw-562077406.jpg",
  ),
  StatusModel(
    "Aachal",
    "Today",
    "10:00 PM",
    "https://cdn.pixabay.com/photo/2015/10/05/22/37/blank-profile-picture-973460_1280.png",
  ),
  StatusModel(
    "Pranav",
    "Yesterday",
    "2:00 PM",
    "https://image.shutterstock.com/image-vector/man-character-face-avatar-glasses-260nw-562077406.jpg",
  ),
  StatusModel(
    "Ankit",
    "Today",
    "4:00 PM",
    "https://image.shutterstock.com/image-vector/man-character-face-avatar-glasses-260nw-562077406.jpg",
  ),
];
