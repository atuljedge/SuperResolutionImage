# SuperResolutionImage
Integrated an AI model into a VC++ project to generate high-resolution output images for further inspection 


flowchart TD
    A([Start]):::start --> B[Load Image via OnViewImageload]:::io
    B --> C{Image Valid?}:::decision
    C -->|No| D[Show Error]:::error
    C -->|Yes| E[Convert to Tensor]:::process
    E --> F[Run PyTorch Model]:::model
    F --> G{Model Success?}:::decision
    G -->|No| H[Show Error]:::error
    G -->|Yes| I[Post-Process Output]:::process
    I --> J[Convert to OpenCV Mat]:::convert
    J --> K[Display/Save Image]:::output
    K --> L([High-res image ready!]):::success

    classDef start fill:#4CAF50,stroke:#388E3C,color:white,stroke-width:2px
    classDef io fill:#2196F3,stroke:#0D47A1,color:white
    classDef process fill:#FFC107,stroke:#FFA000,color:black
    classDef model fill:#9C27B0,stroke:#7B1FA2,color:white
    classDef decision fill:#FF9800,stroke:#F57C00,color:black,shape:diamond
    classDef error fill:#F44336,stroke:#D32F2F,color:white
    classDef convert fill:#00BCD4,stroke:#0097A7,color:white
    classDef output fill:#8BC34A,stroke:#689F38,color:black
    classDef success fill:#4CAF50,stroke:#388E3C,color:white,stroke-width:3px,shape:rounded-square
