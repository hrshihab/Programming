import cv2
import numpy as np
import tkinter as tk
from tkinter import filedialog


def show_image(image_path, manipulated_image):
    # Read the image using OpenCV
    image = cv2.imread(image_path)

    # Display the image in a window
    cv2.imshow("Image", image)
    window_name = "Image"
    cv2.namedWindow(window_name)
    cv2.moveWindow(window_name, 100, 100)

    # Display the manipulated image
    cv2.imshow("Formed Image", manipulated_image)

    # Wait for a key press and close the window if any key is pressed
    cv2.waitKey(0)

    # Destroy all OpenCV windows
    cv2.destroyAllWindows()


def separate_color_channels(image_path):
    # Read the image using OpenCV
    image = cv2.imread(image_path)

    # Split the image into its color channels
    blue_channel, green_channel, red_channel = cv2.split(image)

    return red_channel, green_channel, blue_channel


def multiply_manipulate(red, green, blue, a, b, c):
    # Convert the number to a NumPy array
    a = np.array([a])
    b = np.array([b])
    c = np.array([c])

    # Perform element-wise multiplication of the number with the matrix
    red = red * a
    green = green * b
    blue = blue * c

    reformed_matrix = red + green + blue
    reformed_matrix = np.clip(reformed_matrix, 0, 255).astype(np.uint8)

    # Create a new image from the mixed matrix
    reformed_image = cv2.merge([reformed_matrix, reformed_matrix, reformed_matrix])

    return reformed_image


if __name__ == "__main__":
    red, green, blue = separate_color_channels("ab.png")
    manipulated_image = multiply_manipulate(red, green, blue, 0.8, 1, 0.2)

    show_image("ab.png", manipulated_image)
