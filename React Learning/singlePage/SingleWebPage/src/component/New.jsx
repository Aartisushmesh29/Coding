// src/components/Hero.jsx
import React from 'react';

const New = ({ depth = 0 }) => {
  if (depth > 1) {
    return null; // Stop recursion after a certain depth
  }

  return (
    <div style={{ display: 'flex', border: '1px solid black', padding: '20px', margin: '10px' }}>
      <div style={{ flex: 1 }}>
        <img src="path/to/your/image.jpg" alt="Hero" style={{ width: '100%' }} />
      </div>
      <div style={{ flex: 1 }}>
        <p>This is the text part of the hero component.</p>
        <New depth={depth + 1} />
      </div>
    </div>
  );
};

export default New;
