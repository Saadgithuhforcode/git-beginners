import qrcode

# The data or URL you want to encode
data = "https://google.com"

# Generate the QR code
img = qrcode.make(data)

# Save the image to your computer
img.save("basic_qr.png")

print("QR Code generated successfully!")