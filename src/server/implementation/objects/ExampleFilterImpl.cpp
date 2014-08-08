/* Autogenerated with kurento-module-creator */

#include <gst/gst.h>
#include "MediaPipeline.hpp"
#include <ExampleFilterImplFactory.hpp>
#include "ExampleFilterImpl.hpp"
#include <jsonrpc/JsonSerializer.hpp>
#include <KurentoException.hpp>
#include "MediaPipelineImpl.hpp"

#define GST_CAT_DEFAULT kurento_example_filter_impl
GST_DEBUG_CATEGORY_STATIC (GST_CAT_DEFAULT);
#define GST_DEFAULT_NAME "KurentoExampleFilterImpl"

namespace kurento
{
namespace module
{
namespace example
{

ExampleFilterImpl::ExampleFilterImpl (const boost::property_tree::ptree &config, std::shared_ptr<MediaPipeline> mediaPipeline) : OpenCVFilterImpl (config, std::dynamic_pointer_cast<MediaPipelineImpl> (mediaPipeline) )

{
}

float ExampleFilterImpl::getPropertyName ()
{
  return ExampleFilterOpenCVImpl::getPropertyName ();
}

void ExampleFilterImpl::setPropertyName (float propertyName)
{
  ExampleFilterOpenCVImpl::setPropertyName (propertyName);
}

void ExampleFilterImpl::executeMethod (int paramName)
{
  ExampleFilterOpenCVImpl::executeMethod (paramName);
}

MediaObjectImpl *
ExampleFilterImplFactory::createObject (const boost::property_tree::ptree &config, std::shared_ptr<MediaPipeline> mediaPipeline) const
{
  return new ExampleFilterImpl (config, mediaPipeline);
}

ExampleFilterImpl::StaticConstructor ExampleFilterImpl::staticConstructor;

ExampleFilterImpl::StaticConstructor::StaticConstructor()
{
  GST_DEBUG_CATEGORY_INIT (GST_CAT_DEFAULT, GST_DEFAULT_NAME, 0,
                           GST_DEFAULT_NAME);
}

} /* example */
} /* module */
} /* kurento */
