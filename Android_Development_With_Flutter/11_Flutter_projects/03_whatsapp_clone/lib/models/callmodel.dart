enum Direction{incoming,outgoing}
enum TypeOfCall{voice,video}
class CallModel {
  String name = "";
  String day = "";
  String time = "";
  String profile = "";
  Direction direction = Direction.outgoing;
  TypeOfCall type = TypeOfCall.voice;
  bool callMissed = false;

  CallModel(name, day, time, direction, type, callMissed, profile) {
    this.name = name;
    this.day = day;
    this.time = time;
    this.direction=direction;
    this.type=type;
    this.callMissed = callMissed;
    this.profile = profile;
  }
}

//Make sure the profile of names in chatmodel and callmodel are same.
List<CallModel> calldata = [
  CallModel(
    "Aachal",
    "Today",
    "11:00 AM",
    Direction.incoming,
    TypeOfCall.voice,
    true,
    "assets/girl.png",
  ),
  CallModel(
    "Ankit",
    "Today",
    "6:00 PM",
    Direction.outgoing,
    TypeOfCall.voice,
    false,
    "assets/profile.png",
  ),
  CallModel(
    "Sakshi",
    "Yesterday",
    "8:00 PM",
    Direction.incoming,
    TypeOfCall.voice,
    false,
    "assets/girl.png",
  ),
  CallModel(
    "Ajinkya",
    "Yesterday",
    "10:00 AM",
    Direction.incoming,
    TypeOfCall.video,
    true,
    "assets/profile.png",
  ),
  CallModel(
    "Pranav",
    "Yesterday",
    "8:00 AM",
    Direction.incoming,
    TypeOfCall.voice,
    false,
    "assets/men.png",
  ),
  CallModel(
    "Dron",
    "October 26",
    "2:00 PM",
    Direction.outgoing,
    TypeOfCall.video,
    true,
    "assets/men.png",
  ),
];
