import React from 'react';

function Navbar() {
  return (
    <nav style={{ backgroundColor: '#333', padding: '1rem', color: 'white' }}>
      <ul style={{ listStyleType: 'none', display: 'flex', gap: '1rem', padding: 0 }}>
        <li><a href="/" style={{ color: 'white', textDecoration: 'none' }}>Home</a></li>
        <a href="https://mushtaqdarblog.wordpress.com" style="color: white; text-decoration: none;">
  Visit My Blog
</a>        <li><a href="/services" style={{ color: 'white', textDecoration: 'none' }}>Services</a></li>
        <li><a href="/contact" style={{ color: 'white', textDecoration: 'none' }}>Contact</a></li>
      </ul>
    </nav>
  );
}

export default Navbar;