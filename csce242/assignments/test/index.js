const mongoose = require("mongoose");

//testdb is name of database, it will automatically make it
mongoose
  .connect("mongodb+srv://Cluster50738:spaceX29@cluster50738.tlt566q.mongodb.net/?retryWrites=true&w=majority")
  .then(() => console.log("Connected to mongodb..."))
  .catch((err) => console.error("could not connect ot mongodb...", err));

const schema = new mongoose.Schema({
  name: String,
});

async function createMessage() {
  const result = await message.save();
  console.log(result);
}

//this creates a Message class in our app
const Message = mongoose.model("Message", schema);
const message = new Message({
  name: "Hello World",
});

createMessage();