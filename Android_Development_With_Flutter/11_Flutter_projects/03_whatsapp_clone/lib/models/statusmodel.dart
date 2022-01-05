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
    "assets/profile.png",
  ),
  StatusModel(
    "Sakshi",
    "Yesterday",
    "9:00 AM",
    "assets/men.png",
  ),
  StatusModel(
    "Asmit",
    "Yesterday",
    "7:00 PM",
    "assets/men.png",
  ),
  StatusModel(
    "Aachal",
    "Today",
    "10:00 PM",
    "assets/profile.png",
  ),
  StatusModel(
    "Pranav",
    "Yesterday",
    "2:00 PM",
    "assets/men.png",
  ),
  StatusModel(
    "Ankit",
    "Today",
    "4:00 PM",
    "assets/men.png",
  ),
];
