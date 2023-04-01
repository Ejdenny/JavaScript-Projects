class EventHandler {
  constructor(e) {
    this.events = new Array(e);
  }
  events: Array
}

function docId(str) {
  var obj = document.getElementById(str);
  return obj;
}

let count = docId("count");
