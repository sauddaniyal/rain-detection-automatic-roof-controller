# 🌧️ Rain Detection & Automatic Roof Controller

> A small working prototype that opens the roof when rain is detected and gives the user an alert.

## 📸 What did we build?

This project was developed as our **Digital Logic Design semester project**.

The idea was simple: instead of having to rush outside when it starts raining, why not let the roof detect the rain and react on its own?

We built a working miniature roof using a **rain sensor, Arduino, servo motor, buzzer, and a manual switch**. The physical structure and mechanical linkage were built from scratch to turn the control logic into actual movement.

## ⚙️ How It Works

The system is designed around a simple idea.

When the rain sensor detects water, the Arduino recognizes the change and tells the servo to **open the roof**. At the same time, the buzzer provides an alert so the user knows that rain has been detected.

There is also a **manual switch** for situations where you don't want to rely completely on the automatic mode. For example, on a sunny day, you might want to open or adjust the roof yourself to let in some sunlight or ventilation.

So the project combines three things:

- 🌧️ Automatic rain detection
- 🔔 Rain alert through a buzzer
- 🔘 Manual control when needed

## 🔧 Components

- Arduino
- Rain Sensor Module
- Servo Motor
- Buzzer
- Manual Switch
- Jumper Wires
- Cardboard / structural material
- Wooden sticks for the mechanical linkage
- Paper roof structure

## 🧠 Digital Logic & FSM

Since this was a Digital Logic Design project, we didn't want it to be just a sensor connected to a motor.

The control of the roof is based on different input conditions and states. We used **logic states and Finite State Machine (FSM) concepts** to think about how the system should respond to rain and manual input.

The main idea is:

**Input → Decision → Roof Movement**

This helped us connect what we learned in DLD with a physical working system.

## 🏗️ Building the Model

The physical model was built from scratch using simple materials.

Getting the servo to move the roof was one thing; getting the mechanical linkage to move the roof properly was another. We had to adjust the structure and linkage until the movement worked the way we wanted.

## 📷 Project Gallery

More project photos will be added here.

## 🎥 Demonstration

The demonstration video shows the complete structure followed by the working of the roof mechanism.

**Demo video:** Coming soon

## ⏱️ From Idea to Prototype

We also recorded a short time-lapse of the building process, showing some of the work that went into creating the physical model.

**Build time-lapse:** Coming soon

## 💡 What We Learned

This project gave us a chance to move beyond just writing code or designing logic on paper.

We had to deal with the sensor, control logic, servo movement, wiring, and the physical structure at the same time. Small changes in the mechanical design could affect how the whole system behaved.

It was a good hands-on experience of turning a basic idea into something that actually moves and responds to its environment.

## 🚀 Future Improvements

If we build a second version, we'd like to improve the mechanical structure and add features such as:

- IoT connectivity
- Remote monitoring
- Mobile control
- Weather-based automation
- A stronger and more realistic roof mechanism

---

### 🎓 Digital Logic Design — Semester Project

A team project combining **digital logic, embedded control, sensors, and mechanical automation** into a working prototype.
