#ifndef KERNELS_H_
#define KERNELS_H_

struct preparedImage
{
    unsigned char *input_image;
    unsigned char *output_image;
    unsigned int width, height;
    std::vector<unsigned char> in_image;
};

struct ParametersToFilter
{
    preparedImage *images;
    int img_id;
}

void *
filter(void *arg);
//void getOutputFilter(unsigned char* &output_image, unsigned char* &dev_input, unsigned char* &dev_output, int width, int height);
#endif
