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
    "assets/girl.png",
  ),
  CallModel(
    "Ankit",
    "Today",
    "6:00 PM",
    false,
    "assets/profile.png",
  ),
  CallModel(
    "Sakshi",
    "Yesterday",
    "8:00 PM",
    false,
    "assets/girl.png",
  ),
  CallModel(
    "Ajinkya",
    "Yesterday",
    "10:00 AM",
    true,
    "assets/profile.png",
  ),
  CallModel(
    "Pranav",
    "Yesterday",
    "8:00 AM",
    false,
    "assets/men.png",
  ),
  CallModel(
    "Dron",
    "October 26",
    "2:00 PM",
    true,
    "assets/men.png",
  ),
];
