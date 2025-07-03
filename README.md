# SuperResolutionImage
Integrated an AI model into a VC++ project to generate high-resolution output images for further inspection 

Batch processing for multiple images.

Dynamic output path selection.

GPU acceleration support.

## 🔥 Key Features

| Feature | Description |
|---------|-------------|
| 🖼️ **High-Resolution Output** | Generate enhanced, high-quality images from low-resolution inputs |
| 🔄 **Batch Processing** | Process multiple images sequentially with single command |
| 🚀 **GPU Acceleration** | CUDA-optimized inference with automatic CPU fallback |
| 📂 **Dynamic Output Paths** | Customizable save locations for processed images |
| 🛠️ **OpenCV Integration** | Robust image I/O and preprocessing capabilities |

## 🛠️ Prerequisites

Before getting started, ensure you have:

- **Development Environment**
  - Visual Studio 2019/2022 (with C++ MFC support)
  - Windows SDK (10.0.19041.0 or later)

- **Core Libraries**
  - [LibTorch](https://pytorch.org/cppdocs/installing.html) (PyTorch C++ library)
  - [OpenCV 4.1+](https://opencv.org/releases/) (Prebuilt binaries recommended)
  
- **Optional (For GPU Support)**
  - NVIDIA GPU with CUDA support
  - [CUDA Toolkit 11.7+](https://developer.nvidia.com/cuda-toolkit)
  - [cuDNN 8.5+](https://developer.nvidia.com/cudnn)


```mermaid
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
    K --> L([High-res image ready! For further process]):::success

    classDef start fill:#4CAF50,stroke:#388E3C,color:white,stroke-width:2px
    classDef io fill:#2196F3,stroke:#0D47A1,color:white
    classDef process fill:#FFC107,stroke:#FFA000,color:black
    classDef model fill:#9C27B0,stroke:#7B1FA2,color:white
    classDef decision fill:#FF9800,stroke:#F57C00,color:black,shape:diamond
    classDef error fill:#F44336,stroke:#D32F2F,color:white
    classDef convert fill:#00BCD4,stroke:#0097A7,color:white
    classDef output fill:#8BC34A,stroke:#689F38,color:black
    classDef success fill:#4CAF50,stroke:#388E3C,color:white,stroke-width:3px,shape:rounded-square



