<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>The Cupcake | Affiliate Products</title>
    <style>
        /* General Styles */
        body {
            font-family: 'Arial', sans-serif;
            margin: 0;
            padding: 0;
            background-color: #fffafc;
            color: #4a4a4a;
        }

        header {
            background-color: #ffb6c1;
            padding: 1.5rem 1rem;
            text-align: center;
            color: white;
        }

        header h1 {
            margin: 0;
            font-size: 2.5rem;
            font-family: 'Brush Script MT', cursive;
        }

        header p {
            margin: 0.5rem 0 0;
            font-size: 1.2rem;
        }

        .container {
            padding: 2rem;
        }

        .product-section {
            display: flex;
            flex-wrap: wrap;
            gap: 1.5rem;
            justify-content: center;
        }

        .product-card {
            background-color: white;
            border: 1px solid #eaeaea;
            border-radius: 10px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
            max-width: 300px;
            text-align: center;
            padding: 1rem;
            transition: transform 0.3s;
        }

        .product-card:hover {
            transform: translateY(-5px);
        }

        .product-image img {
            width: 100%;
            height: auto;
            border-radius: 8px;
        }

        .product-title {
            font-size: 1.3rem;
            margin: 0.8rem 0 0.5rem;
        }

        .product-link {
            display: inline-block;
            margin-top: 1rem;
            padding: 0.5rem 1rem;
            font-size: 1rem;
            background-color: #ffb6c1;
            color: white;
            text-decoration: none;
            border-radius: 5px;
            transition: background-color 0.3s;
        }

        .product-link:hover {
            background-color: #ff8aa0;
        }

        footer {
            background-color: #f8f8f8;
            padding: 1rem;
            text-align: center;
            font-size: 0.9rem;
            color: #a1a1a1;
        }

        footer a {
            color: #ffb6c1;
            text-decoration: none;
        }
    </style>
</head>
<body>

<header>
    <h1>The Cupcake</h1>
    <p>Curated products for every mood | Follow us on Instagram: <a href="https://www.instagram.com/thecupcake_2" target="_blank" style="color: white; text-decoration: underline;">@thecupcake_2</a></p>
</header>

<div class="container">
    <h2 style="text-align: center;">Featured Products</h2>
    <div class="product-section">
        <!-- Example Product Card -->
        <div class="product-card">
            <div class="product-image">
                <img src="https://via.placeholder.com/300" alt="Product 1">
            </div>
            <h3 class="product-title">Cute Pastel Bag</h3>
            <a href="#" class="product-link">Shop Now</a>
        </div>
        
        <div class="product-card">
            <div class="product-image">
                <img src="https://via.placeholder.com/300" alt="Product 2">
            </div>
            <h3 class="product-title">Stylish Tech Gadget</h3>
            <a href="#" class="product-link">Shop Now</a>
        </div>

        <div class="product-card">
            <div class="product-image">
                <img src="https://via.placeholder.com/300" alt="Product 3">
            </div>
            <h3 class="product-title">Aesthetic Makeup Set</h3>
            <a href="#" class="product-link">Shop Now</a>
        </div>
    </div>
</div>

<footer>
    <p>&copy; 2024 The Cupcake | Designed with <span style="color: #ffb6c1;">&#10084;</span> for affiliate marketing. <a href="#">Privacy Policy</a></p>
</footer>

</body>
</html>
