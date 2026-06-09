# Assignment 19: Simple Digital Counter & Theme Toggle App

## Question

Build a single-screen mobile application using React Native.

The application should:

* Display a digital counter.
* Allow increment, decrement, and reset operations.
* Prevent negative counter values.
* Support Light Mode and Dark Mode.
* Dynamically update UI colors when the theme changes.

## Program

**File:** `App.jsx`

The application uses React Native components and React Hooks to implement a digital counter with theme switching functionality.

## Features

### Counter Operations

* Increment counter by 1
* Decrement counter by 1
* Prevent negative values
* Reset counter to 0

### Theme Toggle

#### Light Mode (Default)

* White background
* Black text

#### Dark Mode

* Dark background
* White text

### State Management

The application uses React's `useState` hook to manage:

* Counter value
* Theme mode

### Components Used

* View
* Text
* TouchableOpacity
* StatusBar

### Layout

The application uses Flexbox for:

* Centering content
* Arranging buttons side-by-side
* Responsive alignment

## Validation

The decrement button contains a safety check:

```javascript
if (count > 0) {
  setCount(count - 1);
}
```

This prevents the counter value from becoming negative.

## Running the Application

Install dependencies:

```bash
npm install
```

Start Metro Bundler:

```bash
npx react-native start
```

Run on Android:

```bash
npx react-native run-android
```

Run on iOS:

```bash
npx react-native run-ios
```

## Folder Structure

```text
assignment-19
├── README.md
└── App.jsx
```

## Submitted By

**Nitish Kumar**
**Subject:** Advanced Programming
**Teacher:** Nabajyoti Medhi
**Semester:** 4th Semester
**Tezpur University**
