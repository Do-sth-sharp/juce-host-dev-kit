#include <JuceHeader.h>

template class JUCE_API juce::dsp::Bias<float>;
template class JUCE_API juce::dsp::Chorus<float>;
template class JUCE_API juce::dsp::Compressor<float>;
template class JUCE_API juce::dsp::Gain<float>;
template class JUCE_API juce::dsp::LadderFilter<float>;
template class JUCE_API juce::dsp::Limiter<float>;
template class JUCE_API juce::dsp::NoiseGate<float>;
template class JUCE_API juce::dsp::Oscillator<float>;
template class JUCE_API juce::dsp::Phaser<float>;
template class JUCE_API juce::dsp::WaveShaper<float>;

template class JUCE_API juce::dsp::BallisticsFilter<float>;
template class JUCE_API juce::dsp::DelayLine<float>;
template class JUCE_API juce::dsp::DryWetMixer<float>;
template class JUCE_API juce::dsp::FIR::Coefficients<float>;
template class JUCE_API juce::dsp::FIR::Filter<float>;
template class JUCE_API juce::dsp::FirstOrderTPTFilter<float>;
template class JUCE_API juce::dsp::IIR::ArrayCoefficients<float>;
template class JUCE_API juce::dsp::IIR::Coefficients<float>;
template class JUCE_API juce::dsp::IIR::Filter<float>;
template class JUCE_API juce::dsp::LinkwitzRileyFilter<float>;
template class JUCE_API juce::dsp::Oversampling<float>;
template class JUCE_API juce::dsp::Panner<float>;
template class JUCE_API juce::dsp::ProcessContextReplacing<float>;
template class JUCE_API juce::dsp::ProcessContextNonReplacing<float>;
//template class JUCE_API juce::dsp::ProcessorChain<float>;
//template class JUCE_API juce::dsp::ProcessorWrapper<float>;
template class JUCE_API juce::dsp::StateVariableFilter::Parameters<float>;
template class JUCE_API juce::dsp::StateVariableFilter::Filter<float>;
template class JUCE_API juce::dsp::StateVariableTPTFilter<float>;

template class JUCE_API juce::dsp::LogRampedValue<float>;
template class JUCE_API juce::dsp::LookupTable<float>;
template class JUCE_API juce::dsp::LookupTableTransform<float>;
template class JUCE_API juce::dsp::Matrix<float>;
template class JUCE_API juce::dsp::Phase<float>;
template class JUCE_API juce::dsp::Polynomial<float>;

template class JUCE_API juce::dsp::WindowingFunction<float>;

template class JUCE_API juce::dsp::FilterDesign<float>;

template class JUCE_API juce::dsp::AudioBlock<float>;
template class JUCE_API juce::dsp::SIMDRegister<float>;
template class JUCE_API juce::dsp::SIMDRegister<double>;
template class JUCE_API juce::dsp::SIMDRegister<int8_t>;
template class JUCE_API juce::dsp::SIMDRegister<uint8_t>;
template class JUCE_API juce::dsp::SIMDRegister<int8_t>;
template class JUCE_API juce::dsp::SIMDRegister<uint8_t>;
template class JUCE_API juce::dsp::SIMDRegister<int16_t>;
template class JUCE_API juce::dsp::SIMDRegister<uint16_t>;
template class JUCE_API juce::dsp::SIMDRegister<int32_t>;
template class JUCE_API juce::dsp::SIMDRegister<uint32_t>;
template class JUCE_API juce::dsp::SIMDRegister<int64_t>;
template class JUCE_API juce::dsp::SIMDRegister<uint64_t>;